#include <iostream>

int main()
{
    // Part 2: Palindrome Check

    // Input string from command-line
    std::string str;
    std::cout << "Enter String:" << std::endl;
    std::cin >> str;

    // Palindrome Check
    // WRITE YOUR PALINDROME CHECK HERE
    int start = 0;
    int end = str.length() - 1;
    bool is_Palindrome = true;

    while (start < end && is_Palindrome) 
    {
      if (str[start] != str[end])
      {
        is_Palindrome = false;
      }
      start++;
      end--;
    }

    if (is_Palindrome)
    {
      std::cout << str << " is a palindrome" << std::endl;
    }
    else
    {
      std::cout << str << " is NOT a palindrome" << std::endl;
    }

    return 0;
}
