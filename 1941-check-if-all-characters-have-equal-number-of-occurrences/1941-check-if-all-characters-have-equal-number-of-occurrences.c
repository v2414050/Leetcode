bool areOccurrencesEqual(char* s) {
    int freq[26] = {0};
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        freq[s[i] - 'a']++;
    }

    int target = freq[s[0] - 'a'];
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0 && freq[i] != target) {
            return false;
        }
    }
    return true;
}