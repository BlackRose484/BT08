#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

int Strlen(char a[])
{
    int i = 0;
    int count = 0;
    while (a[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

void reverse(char a[])
{
    int l = Strlen(a);
    for (int i = 0; i < l / 2; i++)
    {
        swap(a[i], a[l - i - 1]);
    }
}

void delete_char(char a[], char c)
{
    int l = Strlen(a);
    char **p;
    p = &a;
    for (int i = 0; i < l; i++)
    {
        if (*(*p + i) == c)
        {
            for (int j = i; j < l; j++)
            {
                *(*p + j) = *(*p + j + 1);
            }
            l--;
            i--;
        }
    }
}

void pad_right(char a[], int n)
{
    int l = Strlen(a);
    char **p;
    p = &a;
    if (l < n)
    {
        for (int i = l; i < n; i++)
        {
            *(*p + i) = ' ';
        }
    }
    *(*p + n) = '\0';
}

void pad_left(char a[], int n)
{
    int l = Strlen(a);
    char **p;
    p = &a;
    if (l < n)
    {
        int d = n - l;
        for (int i = l - 1; i >= 0; i--)
        {
            *(*p + d + i) = *(*p + i);
        }
        for (int i = 0; i < d; i++)
        {
            *(*p + i) = ' ';
        }
    }
    *(*p + n) = '\0';
}

int main()
{
    char s[100];
    cin >> s;
    char *p = s;
    // reverse(s);
    // delete_char(s,'h');
    pad_left(s, 12);
    cout << s << endl;
}
