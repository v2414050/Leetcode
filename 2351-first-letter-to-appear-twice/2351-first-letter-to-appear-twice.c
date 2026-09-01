char repeatedCharacter(char* s) {
    int freq[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) {
            return s[i];
        }
    }
    return '\0';
}