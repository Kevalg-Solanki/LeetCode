#include <iostream>
#include <vector>
#include <string>

class Solution
{
    public:
    std::string longestPrefix(std::vector<std::string> strArray)
    {
        int i, currCharIndex = 0;
        char currChar;
        std::string prefix;

        std::cout<<strArray[0]<<strArray[1];
        while (true)
        {
            if (currCharIndex >= strArray[0].size())
            {
                break;
            }
            
            currChar = strArray[0][currCharIndex];

            for (i = 1; i < strArray.size(); i++)
            {
                std::cout<<"currCharIndex in loop = "<<currCharIndex<<std::endl;
            
                std::cout<<"currChar = "<<currChar<<std::endl;
                std::cout<<"strArr[i] = "<<strArray[i][currCharIndex]<<std::endl;
                
                if (currCharIndex >= strArray[i].size() ||
                    currChar != strArray[i][currCharIndex])
                {
                    return prefix;
                }
            }
            currCharIndex++;
            prefix+=currChar;
            std::cout<<"Prefix = "<<prefix<<std::endl;
        }
        return prefix;
    }

};

int main()
{
    std::vector<std::string> strArray = {"flower", "blower", "slower"};
    std::string result;
    Solution solution;
    result = solution.longestPrefix(strArray);
    std::cout << "longest prefix = " << result;
    return 0;
}