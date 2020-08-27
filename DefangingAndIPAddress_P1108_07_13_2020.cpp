class Solution {
private:
    const char defang[4] = "[.]";
    const char fang = '.';
public:
    string defangIPaddr(string address) {
        char buffer[32];
        int j = 0;
        for (int i = 0; i < address.size(); i++) {
            if (address[i] == fang) {
                memcpy(buffer + j, defang, 3);
                j += 3;
            }
            else {
                buffer[j] = address[i];
                j += 1;
            }
        }
        buffer[j] = '\0';
        return buffer;
    }
};