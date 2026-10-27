
char* convert(char* s, int numRows) {
    int len = strlen(s);

    if (numRows == 1 || numRows >= len) {
        char *result = (char *)malloc((len + 1) * sizeof(char));
        strcpy(result, s);
        return result;
    }

    char *result = (char *)malloc((len + 1) * sizeof(char));
    int pos = 0;
    int cycle = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {
        for (int j = row; j < len; j += cycle) {
            result[pos++] = s[j];

            int diagonal = j + cycle - 2 * row;

            if (row != 0 && row != numRows - 1 &&
                diagonal < len) {
                result[pos++] = s[diagonal];
            }
        }
    }

    result[pos] = '\0';
    return result;
}