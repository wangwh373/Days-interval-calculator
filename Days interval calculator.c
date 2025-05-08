//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct
//{
//    unsigned int year;
//    unsigned int month;
//    unsigned int day;
//}Date, * PDate;
//
//int ToDate(char*, PDate);
//int DaysCount(PDate, PDate);
//int is_leap(int);
//int month_days(int, int);
//
//int main()
//{
//    char str1[12], str2[12];
//    Date sd, ed;
//    fgets(str1, 12, stdin);
//    fgets(str2, 12, stdin);
//    if (ToDate(str1, &sd) == 0 && ToDate(str2, &ed) == 0)
//        printf("%d\n", DaysCount(&sd, &ed));
//    else
//        printf("input data is invalid.\n");
//
//    return 0;
//}
//
//int is_leap(int year)
//{
//    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
//}
//
//int month_days(int month, int leap)
//{
//    int m_days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//    if (month == 2)
//        return (leap == 1) ? 29 : 28;
//    else
//        return m_days[month];
//}
//int ToDate(char* str, PDate pd)
//{
//    int y, m, d, r;
//    r = sscanf(str, "%d-%d-%d", &y, &m, &d);
//    if (r == 3 && y >= 1900 && y <= 2050 && m >= 1 && m <= 12 && d >= 1)
//    {
//        int leap = is_leap(y);
//        int dd = month_days(m, leap);
//        if (d <= dd)
//        {
//            pd->year = y;
//            pd->month = m;
//            pd->day = d;
//            return 0;
//        }
//    }
//
//    return -1;
//}
//int DaysCount(PDate sdate, PDate edate)
//{
//    int days = 0;
//    for (int year = (sdate->year) + 1; year < (edate->year); year++)
//    {
//        days += 365;
//        if (is_leap(year))
//        {
//            days += 1;
//        }
//    }
//    if (days > 0/* && (edate->month < sdate->month ||(edate->month == sdate->month&& edate->day < sdate->day))*/)
//    {
//        int s = sdate->year;
//        int e = edate->year;
//        int sleap = is_leap(s);
//        int eleap = is_leap(e);
//
//        int ds = month_days(sdate->month, sleap) - sdate->day;
//        for (int i = (sdate->month) + 1; i <= 12; i++)
//        {
//            ds += month_days(i, sleap);
//        }
//        int de = edate->day;
//        for (int i = (edate->month) - 1; i >= 1; i--)
//        {
//            de += month_days(i, eleap);
//        }
//        days = days + ds + de;
//    }
//    else if (sdate->year == edate->year)
//    {
//        int s = sdate->year;
//        int e = edate->year;
//        int sleap = is_leap(s);
//        int eleap = is_leap(e);
//
//        int ds = sdate->day;
//
//        for (int i = (sdate->month) - 1; i >= 1; i--)
//        {
//            ds += month_days(i, sleap);
//        }
//        int de = edate->day;
//        for (int i = (edate->month) - 1; i >= 1; i--)
//        {
//            de += month_days(i, eleap);
//        }
//        days = de - ds;
//
//    }
//    else if (days == 0)
//    {
//
//        int s = sdate->year;
//        int e = edate->year;
//        int sleap = is_leap(s);
//        int eleap = is_leap(e);
//
//        int ds = month_days(sdate->month, sleap) - sdate->day;
//
//        for (int i = (sdate->month) + 1; i <= 12; i++)
//        {
//            ds += month_days(i, sleap);
//        }
//        int de = edate->day;
//        for (int i = (edate->month) - 1; i >= 1; i--)
//        {
//            de += month_days(i, eleap);
//        }
//        days = de + ds;
//    }
//    return days;
//
//}
