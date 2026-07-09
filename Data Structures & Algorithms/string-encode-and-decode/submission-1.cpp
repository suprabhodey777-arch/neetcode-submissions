class Solution {
public:

    string encode(vector<string>& strs) { 
        string encoded = "";
        for (string x : strs) {
            encoded += to_string(x.length()) + "#" + x;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> v;
        int i = 0;

        while (i < s.length()) {
            int len = 0;

            // Read the full length (handles multi-digit lengths)
            while (s[i] != '#') {
                len = len * 10 + (s[i] - '0');
                i++;
            }

            i++; // Skip '#'

            string word = s.substr(i, len);
            v.push_back(word);

            i += len; // Move to the next encoded string
        }

        return v;
    }
};
