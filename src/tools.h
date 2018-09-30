#ifndef TOOLS_H
#define TOOLS_H

#define INT_CHECK(a, b) ((a) >= (b))
#define DOUBLE_CHECK(a, b) \
    (((a) > (b)) || (doubleCompare((a), (b))))

#define INT_BOUND(a, low, up) \
    ((INT_CHECK((a), (low))) && (INT_CHECK((up), (a))))
#define DOUBLE_BOUND(a, low, up) \
    ((DOUBLE_CHECK((a), (low))) && (DOUBLE_CHECK((up), (a))))

#define PI 3.14159265358979323846
#define DEG_TO_RAD(i) ((i) * (PI / 180.0))
#define UPPER(i) if (islower(i)) { i -= 32; }
#define LOWER(i) if (isupper(i)) { i += 32; }

void initString(char** str, int len);
void initStringWithContents(char** str, char* contents);
void initStringArray(char***, int rows, int cols);
void freePtr(void** ptr);
void freeArray(void*** ptr, int len);
int stringCompare(char* str1, char* str2);
void upperRange(char* str, int range);
int integerBoundaryCheck(int i, int lower, int upper);
int doubleCompare(double num1, double num2);
int doubleBoundaryCheck(double i, double lower, double upper);
void removeTrailingNewline(char* str, int len);
int countWhiteSpace(char* str);
void trim(char** str);
void printStringArray(char* format, char** strArr, int len);
void printStringArrayUntilEOF(char* format, char** strArr);

#endif
