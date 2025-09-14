#include <iostream>
#include <unordered_map>
int main()
{
    std::unordered_map<char,int> roman={
        {'I',1},
        {'V',5},
        {'X',10},
        {'L',50},
        {'C',100},
        {'D',500},
        {'M',1000}
    };
    std::string romanNum;
    int i,result=0;
   
    std::cout<<"Enter Roman Number = ";
    std::cin>>romanNum;
    
  
    for(i=0;i<romanNum.size();i++)
    {
        //input validation
        if(roman.find(romanNum[i])==roman.end())
        {
            std::cout<<"Invalid roman number";
            return 1;
        }
        if(i+1<romanNum.size()&&roman[romanNum[i]]<roman[romanNum[i+1]]){
                result += roman[romanNum[i+1]] - roman[romanNum[i]];
                i++;
           }
           else
           {
                result = result + roman[romanNum[i]];
           }
    }
    
    std::cout<<"Number = "<<result;
    return 0;
    
}