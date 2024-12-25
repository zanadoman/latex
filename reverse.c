// Reverse a string with recursion
char *rstrrev(const char *source, char *destination) {
    if (*source) {
        destination = rstrrev(source + 1, destination);
        *destination++ = *source;
    }
    return destination;
}
