#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

//task 1

//void removeLastLine(const char* inputFile, const char* outputFile)
//{
//    ifstream in(inputFile);
//    if (!in.is_open())
//    {
//        cout << "Error opening input file!\n";
//        return;
//    }
//
//    int lineCount = 0;
//    char temp[1024];
//
//    while (in.getline(temp, sizeof(temp)))
//    {
//        lineCount++;
//    }
//
//    if (lineCount <= 1)
//    {
//        in.close();
//        ofstream out(outputFile);
//        out.close();
//        cout << "Task 1 completed successfully!\n";
//        return;
//    }
//
//    in.clear();
//    in.seekg(0, ios::beg);
//
//    char** lines = new char* [lineCount];
//    for (int i = 0; i < lineCount; ++i)
//    {
//        in.getline(temp, sizeof(temp));
//        lines[i] = new char[strlen(temp) + 1];
//        strcpy(lines[i], temp);
//    }
//    in.close();
//
//    ofstream out(outputFile);
//    if (!out.is_open())
//    {
//        cout << "Error opening output file!\n";
//        for (int i = 0; i < lineCount; ++i)
//        {
//            delete[] lines[i];
//        }
//        delete[] lines;
//        return;
//    }
//
//    for (int i = 0; i < lineCount - 1; ++i)
//    {
//        out << lines[i] << "\n";
//    }
//
//    for (int i = 0; i < lineCount; ++i)
//    {
//        delete[] lines[i];
//    }
//    delete[] lines;
//
//    out.close();
//    cout << "Task 1 completed successfully!\n";
//}
//
//int main()
//{
//    removeLastLine("input1.txt", "output1.txt");
//}

//task2

//int findLongestLineLength(const char* inputFile)
//{
//    ifstream in(inputFile);
//    if (!in.is_open())
//    {
//        cout << "Error opening input file!\n";
//        return -1;
//    }
//
//    char line[1024];
//    int maxLength = 0;
//
//    while (in.getline(line, sizeof(line)))
//    {
//        int length = strlen(line);
//        if (length > maxLength)
//        {
//            maxLength = length;
//        }
//    }
//
//    in.close();
//    return maxLength;
//}
//
//int main()
//{
//    int maxLength = findLongestLineLength("input2.txt");
//    if (maxLength != -1)
//    {
//        cout << "Longest line length: " << maxLength << "\n";
//    }
//}

//task3

//void removePunctuation(char* str)
//{
//    int len = strlen(str);
//    int j = 0;
//    for (int i = 0; i < len; ++i)
//    {
//        if ((str[i] >= 'a' && str[i] <= 'z') ||
//            (str[i] >= 'A' && str[i] <= 'Z') ||
//            (str[i] >= '0' && str[i] <= '9'))
//        {
//            str[j++] = str[i];
//        }
//    }
//    str[j] = '\0';
//}
//
//int countWordOccurrences(const char* inputFile, const char* targetWord)
//{
//    ifstream in(inputFile);
//    if (!in.is_open())
//    {
//        cout << "Error opening input file!\n";
//        return -1;
//    }
//
//    char word[256];
//    int count = 0;
//
//    while (in >> word)
//    {
//        removePunctuation(word);
//        if (strcmp(word, targetWord) == 0)
//        {
//            count++;
//        }
//    }
//
//    in.close();
//    return count;
//}
//
//int main()
//{
//    char target[100];
//    cout << "Enter word to search: ";
//    cin >> target;
//
//    int occurrences = countWordOccurrences("input3.txt", target);
//    if (occurrences != -1)
//    {
//        cout << "Word '" << target << "' occurs " << occurrences << " times.\n";
//    }
//}

//task4

//void replaceWordInFile(const char* inputFile, const char* outputFile, const char* targetWord, const char* replacement)
//{
//    ifstream in(inputFile);
//    if (!in.is_open())
//    {
//        cout << "Error opening input file!\n";
//        return;
//    }
//
//    char buffer[10000] = { 0 };
//    char word[256];
//    char ch;
//
//    while (in.get(ch))
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
//        {
//            int len = strlen(word);
//            word[len] = ch;
//            word[len + 1] = '\0';
//        }
//        else
//        {
//            if (strlen(word) > 0)
//            {
//                if (strcmp(word, targetWord) == 0)
//                {
//                    strcat(buffer, replacement);
//                }
//                else
//                {
//                    strcat(buffer, word);
//                }
//                word[0] = '\0';
//            }
//            int bufLen = strlen(buffer);
//            buffer[bufLen] = ch;
//            buffer[bufLen + 1] = '\0';
//        }
//    }
//
//    if (strlen(word) > 0)
//    {
//        if (strcmp(word, targetWord) == 0)
//        {
//            strcat(buffer, replacement);
//        }
//        else
//        {
//            strcat(buffer, word);
//        }
//    }
//
//    in.close();
//
//    ofstream out(outputFile);
//    if (!out.is_open())
//    {
//        cout << "Error opening output file!\n";
//        return;
//    }
//
//    out << buffer;
//    out.close();
//
//    cout << "Task 4 completed successfully!\n";
//}
//
//int main()
//{
//    char targetWord[100];
//    char replacement[100];
//
//    cout << "Enter word to search: ";
//    cin >> targetWord;
//
//    cout << "Enter replacement word: ";
//    cin >> replacement;
//
//    replaceWordInFile("input4.txt", "output4.txt", targetWord, replacement);
//}