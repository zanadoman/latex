/**
 * \brief Reverses a zero terminated string.
 * \param source Zero terminated string.
 * \param destination Output buffer for the reversed string.
 * \return Address of the last character in the output buffer.
 */
char *reverse(const char *source, char *destination) {
    if (*source) {
        destination = reverse(source + 1, destination);
        *destination++ = *source;
    }
    return destination;
}
