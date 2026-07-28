class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        int n = arr.size();
        
        // अगर 3 से कम एलिमेंट्स हैं, तो तीसरा सबसे बड़ा नहीं मिल सकता
        if (n < 3) {
            return -1;
        }
        
        int first = -1;
        int second = -1;
        int third = -1;
        
        for (int i = 0; i < n; i++) {
            int current = arr[i];
            
            // 1. पहले चेक करें: क्या यह सबसे बड़ा (First Largest) है?
            if (current > first) {
                third = second;     // पुराना सेकंड अब थर्ड बन गया
                second = first;     // पुराना फर्स्ट अब सेकंड बन गया
                first = current;    // नया फर्स्ट मिल गया
            }
            // 2. अगर फर्स्ट नहीं है, तो चेक करें: क्या यह सेकंड लार्जेस्ट है?
            else if (current > second) {
                third = second;     // पुराना सेकंड अब थर्ड बन गया
                second = current;   // नया सेकंड मिल गया
            }
            // 3. अगर फर्स्ट और सेकंड दोनों नहीं है, तो थर्ड लार्जेस्ट चेक करें
            else if (current > third) {
                third = current;    // नया थर्ड मिल गया
            }
        }
        
        return third;
    }
};
