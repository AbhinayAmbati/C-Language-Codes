#include <stdio.h>
#include <string.h>
#include <openssl/dsa.h>
#include <openssl/evp.h>
#include <openssl/sha.h>

int main() {
    // Initialize the OpenSSL library
    OpenSSL_add_all_algorithms();

    // Create a DSA structure
    DSA *dsa = DSA_generate_parameters(1024, NULL, 0, NULL, NULL, NULL, NULL);

    // Generate the DSA key pair
    DSA_generate_key(dsa);

    // Sample data to be signed
    unsigned char data[] = "Hello, world!";
    int data_len = strlen((char *)data); // casting to char* for compatibility

    // Hashing the data using SHA-256
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256(data, data_len, hash);

    // Display the hash
    printf("Hash: ");
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        printf("%02x", hash[i]);
    }
    printf("\n");

    // Sign the hash
    unsigned char signature[DSA_size(dsa)];
    unsigned int signature_len;
    DSA_sign(0, hash, SHA256_DIGEST_LENGTH, signature, &signature_len, dsa);

    // Verify the signature
    int verified = DSA_verify(0, hash, SHA256_DIGEST_LENGTH, signature, signature_len, dsa);
    if (verified == 1) {
        printf("Signature verified successfully.\n");
    } else {
        printf("Failed to verify the signature.\n");
    }

    // Free the DSA structure
    DSA_free(dsa);

    // Clean up the OpenSSL library
    EVP_cleanup();

    return 0;
}
