#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// int main()
// {
//     // int a,b;
//     // printf("请输入两个随机的数字:");
//     // scanf("%d %d", &a, &b);

//     // printf("%d + %d = %d\n",a,b,a+b);
//     // printf("%d - %d = %d\n",a,b,a-b);
//     // printf("%d * %d = %d\n",a,b,a*b);
//     // printf("%d / %d = %d......%d\n",a,b,a/b,a%b);

//     // int cm;
//     // printf("请输入一个厘米数：");
//     // scanf("%d",&cm);
//     // int foot = cm/30.48;
//     // int inch = ( cm/30.48 - foot ) * 12;
//     // printf("%d厘米等于%d英尺%d英寸\n",cm,foot,inch);
//     // return 0;

// // int time, pass_time;
// //     printf("请输入起始时间和流逝分钟数，空格分隔：");
// //     scanf("%d %d", &time, &pass_time);
    
// //     // 1. 拆分原始时分
// //     int h = time / 100;
// //     int m = time % 100;
    
// //     // 2. 统一换算成总分钟计算（正负自动兼容）
// //     int total_min = h * 60 + m + pass_time;
    
// //     // 3. 算出新时分
// //     int new_h = total_min / 60;
// //     int new_m = total_min % 60;
    
// //     // 4. 拼接成题目要求的四位数格式
// //     int res = new_h * 100 + new_m;
    
// //     printf("%d\n", res);
// //     return 0;

//     // int i;
//     // printf("请输入一个三位数：");
//     // scanf("%d",&i);
//     // int a = i / 100 ;
//     // int b = (i % 100) / 10 ;
//     // int c = (i % 100) % 10 ;
//     // printf("逆排序后的三位数为：%d\n",c*100+b*10+a);
//     // return 0;

//     // int hour1,minute1;
//     // int hour2,minute2;
//     // printf("请输入起始时间：");
//     // scanf("%d %d",&hour1,&minute1);
//     // printf("请输入终止时间：");
//     // scanf("%d %d",&hour2,&minute2);
//     // int ih = hour2 - hour1;
//     // int im = minute2 - minute1;
//     // if (im < 0)
//     // {
//     //     im = 60 + im ;
//     //     ih --;
//     // }
//     // printf("时间差就是%d小时%d分钟。\n",ih,im);

//     // const int MINOR = 35;
//     // int age = 0;
//     // printf("请输入你的年龄：");
//     // scanf("%d",&age);
//     // printf("你的年龄是%d岁。\n",age);
//     // if (age<MINOR)
//     // {
//     //     printf("小逼登，年轻是美好的，");
//     // }
//     // else {
//     //     printf("老逼登，最美不过夕阳红，");
//     // }
//     // printf("年龄决定了你的精神世界，好好珍惜吧。\n");
//     // return 0;

//     // const double RATE = 8.25;
//     // const int STANDRD = 40;
//     // double pay = 0.0;
//     // int hours;

//     // printf("请输入工作的小时数：");
//     // scanf("%d",&hours);
//     // printf("\n");
//     // if (hours > STANDRD)
//     //     pay = STANDRD * RATE + (hours - STANDRD) * (RATE * 1.5);
//     // else 
//     //     pay = hours * RATE;
//     // printf("应付工资：%f\n",pay);
//     // return 0;

//     // int a,b,c;
//     // printf("请输入三个数字：");
//     // scanf("%d %d %d",&a,&b,&c);

//     // if (a > b)
//     // {
//     //     if (a > c)
//     //     {
//     //         printf("max = %d\n",a);
//     //     }
//     //     else
//     //         printf("max = %d\n",c);
//     // }
//     // else
//     // {
//     //     if (b > c)
//     //     {
//     //         printf("max = %d\n",b);
//     //     }
//     //     else
//     //         printf("max = %d\n",c);
//     // }

//     // int x;
//     // printf("请输入一个数字：");
//     // scanf("%d",&x);
//     // int f = 0;
//     // if (x < 0)
//     // {
//     //     f = -1;
//     // }
//     // else if (x == 0)
//     // {
//     //     f = 0;
//     // }
//     // else if (x > 0)
//     // {
//     //     f = 2 * x;
//     // }
//     // printf("函数值f=%d.\n",f);
//     // return 0;

//     // int score;
//     // printf("请输入你的分数：");
//     // scanf("%d",&score);

//     // if (score >= 90)
//     // {
//     //     printf("你的等级是A.\n");
//     // }
//     // else if (score >= 80 && score <= 90)
//     // {
//     //     printf("你的等级是B.\n");
//     // }
//     // else if (score >= 70 && score <= 80)
//     // {
//     //     printf("你的等级是C.\n");
//     // }
//     // else if (score >= 60 && score <= 70)
//     // {
//     //     printf("你的等级是D.\n");
//     // }
//     // else
//     // {
//     //     printf("你的等级是E.\n");
//     // }
//     // return 0;

//     // int x;
//     // printf("请输入一个数字：");
//     // scanf("%d", &x);
//     // int sign,f;
//     // if (x>0)
//     // {
//     //     sign = 1;
//     // }
//     // else if (x == 0)
//     // {
//     //     sign = 0;
//     // }
//     // else 
//     // {
//     //     sign = -1;
//     // }

//     // switch (sign)
//     // {
//     // case 1:
//     //     f = 2 * x;
//     //     break;
//     // case 0:
//     //     f = 0;
//     //     break;
//     // case -1:
//     //     f = -1;
//     //     break;
//     // }

//     // printf("函数值为：%d。\n",f);
//     // return 0;

//     // long long x;
//     // int n=0;
//     // scanf("%lld", &x);
//     // n++;
//     // x /=10;
//     // while (x>0)
//     // {
//     //     n++;
//     //     x/=10;
//     // }
//     // printf("%d \n",n);
//     // return 0;

//     // srand(time(0));
//     // int number1 = rand()%100+1;
//     // int number2;
//     // int count = 0;
//     // printf("我们来玩猜数字游戏吧，我已经想好了一个1-100之间的数字。");
//     // printf("请输入你想的数字：");
//     // scanf("%d",&number2);
//     // count++;
//     // while (number2 != number1)
//     // {
//     // if (number2 > number1)
//     //     {
//     //         printf("你猜的数太大了。\n");
//     //         count++;
//     //         printf("请输入你想的数字：");
//     //         scanf("%d",&number2);
//     //     }
//     // else if (number2 < number1)
//     //     {
//     //         printf("你猜的数太小了。\n");
//     //         count++;
//     //         printf("请输入你想的数字：");
//     //         scanf("%d",&number2);
//     //     }
//     // }
//     // printf("恭喜你猜对了。\n");
//     // printf("你一共猜了%d次。\n",count);
//     // return 0;

//     // int number;
//     // int sum = 0;
//     // int count = 0;
//     // do{
//     //     scanf("%d", &number);
//     //     if (number != -1)
//     //     {
//     //         sum += number;
//     //         count++;
//     //     }
        
//     // } while (number != -1);

//     // printf("%f",1.0 * sum/count);

//     // return 0;

//     // int t = 1;
//     // int sum;
//     // while (t<=100)
//     // {
//     //     sum += t;
//     //     t++;
//     // }
//     // printf("%d\n",sum);
//     // return 0;

//     // int t = 1;
//     // while (t <= 20)
//     // {   
//     //     if (t % 2 == 0)
//     //     {
//     //         printf("%d\n",t);
//     //     }
//     //     t++;
//     // }
    
//     // int t = 10;
//     // do
//     // {
//     //     printf("%d\n",t);
//     //     t--;
//     // } while (t != 0);
    
//     // int t;
//     // int count = 0;
//     // printf("请输入一个数字（尽量在9位数以内）：");
//     // scanf("%d",&t);
//     // count++;
//     // t = t / 10;
//     // while (t != 0)
//     // {
//     //     t = t/10;
//     //     count++;
//     // }
//     // printf("数字是%d位数",count);
//     // return 0;

//     // int t;
//     // int sum = 0;
//     // printf("请输入数字:");
//     // scanf("%d",&t);
//     // sum = sum + t;
//     // if (t != 0)
//     // {
//     //     while (t != 0)
//     //         {
//     //             printf("请输入数字:");
//     //             scanf("%d",&t);
//     //             sum = sum + t;
//     //         }
//     // }
//     // printf("%d",sum);
//     // return 0;


//     // srand(time(0));
//     // int number1 = (rand()%100+1)/2;
//     // int number2;
//     // int count = 0;
//     // printf("我们来玩猜数字游戏吧，我已经想好了一个1-50之间的数字。");
//     // printf("请输入你想的数字：");
//     // scanf("%d",&number2);
//     // count++;
//     // while (number2 != number1)
//     // {
//     // if (number2 > number1)
//     //     {
//     //         printf("你猜的数太大了。\n");
//     //         count++;
//     //         printf("请输入你想的数字：");
//     //         scanf("%d",&number2);
//     //     }
//     // else if (number2 < number1)
//     //     {
//     //         printf("你猜的数太小了。\n");
//     //         count++;
//     //         printf("请输入你想的数字：");
//     //         scanf("%d",&number2);
//     //     }
//     // }
//     // printf("恭喜你猜对了。\n");
//     // printf("你一共猜了%d次。\n",count);
//     // return 0;

//     // int t;
//     // int plus = 1;
//     // printf("请输入一个正整数：");
//     // scanf("%d",&t);
//     // while (t!=0)
//     // {
//     //     plus = plus * t;
//     //     t--;
//     // }
//     // printf("%d\n",plus);
//     // return 0;

//     // int a,b,r;
//     // printf("请输入两个数字：");
//     // scanf("%d %d", &a,&b);
//     // while ( b != 0 )
//     // {
//     //     r = a % b;
//     //     a = b;
//     //     b = r;
//     // }
//     // printf("最大公约数是%d\n",a);
//     // return 0;
    
//     // int a = 0,b = 0,c = 0;
//     // int t;
//     // while (t != -1)
//     // {
//     //     printf("请输入数字：");
//     //     scanf("%d",&t);
//     //     if (t > 0)
//     //     {
//     //         a++;
//     //     }
//     //     else if (t == -1)
//     //     {
//     //         break;
//     //     }
        
//     //     else if (t == 0)
//     //     {
//     //         b++;
//     //     }
//     //     else
//     //     {
//     //         c++;
//     //     }
//     // }
//     // printf("一共输入正数%d次，0%d次，负数%d次。\n", a,b,c);
//     // return 0;

//     // int t=1;

//     // while (t <= 100)
//     // {
//     //     if (t % 7 == 0)
//     //     {
//     //         printf("%d\n",t);
//     //     }
//     //     t++;
//     // }
//     // return 0;
    
//     // int a,b;
//     // int sum = 0;
//     // while(1)
//     // {
//     //     printf("请输入两个数字：");
//     //     scanf("%d %d",&a,&b);
//     //     if(a == -999)
//     //     {
//     //         break;
//     //     }
//     //     sum = a + b;
//     //     printf("本次相加结果：%d\n", sum);
//     // }
//     // return 0;


//     // int n;
//     // scanf("%d",&n);
//     // int fact = 1;
//     // int i =1;
//     // while (i<=n)
//     // {
//     //     fact = fact * i;
//     //     i++;
//     // }
//     // printf("%d!=%d\n",n,fact);
//     // return 0;

//     // int i;
//     // for (i=1;i<=5;i++)
//     // {
//     //     printf("i=%d",i);
//     // }
//     // printf("\n最后i=%d\n",i);
//     // return 0;

//     // int x = 2;
//     // // scanf("%d",&x);
//     // int cnt = 0;
//     // // for (x = 2; x < 100; x++)
//     // while (cnt < 50) 
//     // {
//     //     int i;
//     //     int isPrime = 1;
//     //     for (i = 2; i < x; i++)
//     //     {
//     //         if (x % i == 0)
//     //         {
//     //             isPrime = 0;
//     //             break;
//     //         }
//     //     }
//     //     if (isPrime == 1)
//     //     {
//     //         printf("%d ",x);
//     //         cnt++;
//     //     }
//     //     x++;
//     // }
//     // printf("\n");
//     // return 0;

// //     int x;
// //     int one,two,five;

// //     scanf("%d",&x);
// //     for (one = 1; one < x*10; one++)
// //     {
// //         for (two = 1; two < x*10/2; two++)
// //         {
// //             for (five = 1; five < x*10/5; five++)
// //             {
// //                 if (one + two * 2 + five * 5 == x*10)
// //                 {
// //                     printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n",one,two,five,x);
// //                     goto out;
// //                 }
                
// //             }
            
// //         }
        
// //     }
// // out:
// //     return 0;
    

//     // int n;
//     // scanf("%d",&n);
//     // double sum = 1.0;
//     // for (int i = 2; i <= n; i++)
//     // {
//     //     if (i % 2 ==0)
//     //     {
//     //         sum = sum - 1.0/i;
//     //     }
//     //     else
//     //     {
//     //         sum = sum + 1.0/i;
//     //     }
        
//     // }
//     // printf("%lf\n",sum);

//     // return 0;


//     // int x;
//     // scanf("%d",&x);
//     // int t = 0;
//     // do
//     // {
//     //     int d = x % 10;
//     //     t = t * 10 + d;
//     //     x = x / 10;
//     // } while (x > 0);
//     // printf("t=%d\n",t);
//     // x = t;
//     // do
//     // {
//     //     int d = x % 10;
//     //     printf("%d",d);
//     //     if (x > 9)
//     //     {
//     //         printf(" ");
//     //     }
//     //     x = x / 10;
//     // } while (x > 0);


//     // int x;
//     // scanf("%d",&x);
//     // int cnt = 0;
//     // int mask = 1;
//     // int t = x;
//     // do
//     // {
//     //     t = t / 10;
//     //     mask = mask * 10;
//     // } while (t > 9);
//     // do
//     // {
//     //     int d = x / mask;
//     //     printf("%d",d);
//     //     if ( mask > 9 )
//     //     {
//     //         printf(" ");
//     //     }
//     //     x = x % mask;
//     //     mask = mask / 10;
//     //     // printf("x = %d,mask = %d,d = %d\n", x, mask, d);
//     // } while (mask > 0);

//     // printf("\n");
//     // return 0;


//     // for (int i = 1; i <= 50; i++)
//     // {
//     //     if (i % 3 == 0)
//     //     {
//     //         printf("%d ",i);
//     //     }
//     // }
//     // printf("\n");
//     // return 0;

//     // int i = 1;
//     // int sum = 0;
//     // while (i <= 50)
//     // {
//     //     if (i % 2 != 0)
//     //     {
//     //         sum += i;
//     //     }
//     //     i++;
//     // }
//     // printf("%d\n",sum);

//     // for (int i = 1; i <= 20; i++)
//     // {
//     //     if (i % 2 == 0)
//     //     {
//     //         printf("%d ",i);
//     //     }
//     // }
//     // printf("\n");

//     // int i = 1;
//     // do
//     // {
//     //     if (i % 2 == 0)
//     //     {
//     //         printf("%d ",i);
//     //     }
//     //     i++;
        
//     // } while (i <= 20);
//     // printf("\n");
    
//     // int i = 1;
//     // while (i <= 100)
//     // {
//     //     if (i % 3 == 0 && i % 5 == 0)
//     //     {
//     //         printf("%d ",i);
//     //     }
//     //     i++;
//     // }
//     // printf("\n"); 

//     // int i;
//     // scanf("%d",&i);
//     // int t = 0;
//     // do
//     // {
//     //     t = i % 10;
//     //     i = i / 10;
//     //     printf("%d ", t);

//     // } while (i > 0);
//     // printf("\n");
    
//     // int i;
//     // int sum = 0;
//     // scanf("%d",&i);
//     // while (i != 999)
//     // {
//     //     sum += i;
//     //     scanf("%d", &i);
//     // }
//     // printf("%d\n",sum);
    
//     // const int SECRET = 123456;
//     // int input_secret;
//     // int times = 0;
//     // do
//     // {
//     //     printf("请输入密码：");
//     //     scanf("%d",&input_secret);
//     //     if (input_secret == SECRET)
//     //     {
//     //         printf("输入正确，通过。");
//     //         break;
//     //     }
//     //     times++;
//     //     printf("密码错误，已输错%d次\n", times);
//     //     if(times == 3)
//     //     {
//     //         printf("连续输错3次，强制退出！");
//     //         break;
//     //     }
//     // } while (input_secret != SECRET && times < 3);
//     // return 0;

//     // int x;
//     // scanf("%d",&x);
//     // int plus = 1;
//     // for (int i = 1; i <= x; i++)
//     // {
//     //     plus *= i;
//     // }
//     // printf("%d",plus);

//     // int a,b;
//     // scanf("%d %d",&a,&b);
//     // int r = 1;
//     // while (r != 0)
//     // {
//     //     r = a % b;
//     //     a = b;
//     //     b = r;
//     // }
//     // printf("最大公约数为：%d",a);

//     // int number1 = 0,number2 = 0,number3 = 0;
//     // int x;
//     // printf("请输入数字：");
//     // scanf("%d",&x);
//     // while (x != -1)
//     // {
//     //     if (x > 0)
//     //     {
//     //         number1++;
//     //     }
//     //     else if (x < 0)
//     //     {
//     //         number2++;
//     //     }
//     //     else
//     //     {
//     //         number3++;
//     //     }
//     //     printf("请输入数字：");
//     //     scanf("%d",&x);
//     // }
//     // printf("一共输入正数%d个，负数%d个，0有%d个。", number1,number2,number3);

//     // srand(time(0));
//     // int number1 = (rand()%100-9)/3;
//     // int number2;
//     // int count = 0;
//     // printf("我们来玩猜数字游戏吧，我已经想好了一个1-30之间的数字。");
//     // printf("请输入你想的数字：");
//     // scanf("%d",&number2);
//     // count++;
//     // while (number2 != number1)
//     // {
//     // if (number2 > number1)
//     //     {
//     //         printf("你猜的数太大了。\n");
//     //         count++;
//     //         printf("请输入你想的数字：");
//     //         scanf("%d",&number2);
//     //     }
//     // else if (number2 < number1)
//     //     {
//     //         printf("你猜的数太小了。\n");
//     //         count++;
//     //         printf("请输入你想的数字：");
//     //         scanf("%d",&number2);
//     //     }
//     // }
//     // printf("恭喜你猜对了。\n");
//     // printf("你一共猜了%d次。\n",count);
//     // return 0;


    
//     // for (int i = 1; i <= 9; i++)
//     // {
//     //     for (int j = 1; j <= i; j++)
//     //     {
//     //         int k = i * j;
//     //         printf("%d * %d = % d  ",i,j,k);
//     //     }
//     //     printf("\n");
//     // }
    
//     // int score;
//     // printf("请输入学生的分数：");
//     // scanf("%d",&score);
//     // int n1 = 0;
//     // int n2 = 0;
//     // int n3 = 0;
//     // double sum;
//     // while (score>=0)
//     // {
//     //     if (score == 100)
//     //     {
//     //         n2++;
//     //     }
//     //     else
//     //     {
//     //         n3++;
//     //     }
//     //     n1++;
//     //     sum += score;
//     //     printf("请输入学生的分数：");
//     //     scanf("%d",&score);
//     // }
//     // printf("总共参与的人数有%d人，满分的人数有%d人，不及格的人数有%d人，全班平均分为%f分。\n", n1, n2, n3,sum/n1);

//     // int n;
//     // printf("请输入一个大于等于2的数字n：");
//     // scanf("%d", &n);

//     // // 外层：遍历2~n每一个数字
//     // for(int x = 2; x <= n; x++)
//     // {
//     //     int isPrime = 1; // 标记，1代表默认是质数
//     //     // 内层：判断x是不是质数，拿2~x-1试除
//     //     for(int i = 2; i < x; i++)
//     //     {
//     //         if(x % i == 0)
//     //         {
//     //             isPrime = 0; // 能整除，不是质数
//     //             break;       // 不用继续试除了，直接跳出内层
//     //         }
//     //     }
//     //     // 标记没被修改，说明是质数
//     //     if(isPrime == 1)
//     //     {
//     //         printf("%d ", x);
//     //     }
//     // }
//     // return 0;
    
//     // int t;
//     // int p = 0;
//     // scanf("%d",&t);
//     // for (int i = t; i < t + 4; ++i)
//     // {
//     //     for (int j = t; j < t + 4; ++j)
//     //     {
//     //         for (int k = t; k < t + 4; ++k)
//     //         {   
//     //             if (i != j && i != k && j != k)
//     //             {
//     //                 printf("%d", i * 100 + j * 10 + k);
//     //                 p++;
//     //                 if (p % 6 == 0)
//     //                 {
//     //                     printf("\n");
//     //                 }
//     //                 else
//     //                 {
//     //                     printf(" ");
//     //                 }
                    
//     //             }
                
//     //         }
            
//     //     }
//     // }
    
//     // int n;
//     // printf("请输入位数n：");
//     // scanf("%d", &n);

//     // int max = 1;
//     // for (int k = 0; k < n; k++)
//     // {
//     //     max *= 10;
//     // }

//     // for (int i = 1; i < max; i++)
//     // {
//     //     int t = i;
//     //     int sum = 0;
//     //     while (t != 0)
//     //     {
//     //         int a = t % 10;
//     //         t = t / 10;
//     //         int power = (int)round(pow(a, n));
//     //         sum = sum + power;
//     //     }

//     //     if (sum == i)
//     //     {
//     //         printf("%d ", i);
//     //     }
//     // }

//     // return 0;


//     // int n;
//     // scanf("%d", &n);
//     // int i = 1;
//     // double fenzi = 1.0;
//     // double fenmu = 1.0;
//     // double sum = 0;

//     // while (i <= n)
//     // {
//     //     // 先加当前项 fenzi+fenmu / fenzi
//     //     double new_fenzi = fenzi + fenmu;
//     //     sum = sum + new_fenzi / fenzi;

//     //     // 更新分子分母，为下一轮做准备
//     //     fenmu = fenzi;
//     //     fenzi = new_fenzi;
//     //     i++;
//     // }
//     // printf("%.2f\n", sum);
//     // return 0;

//     // int n;
//     // scanf("%d",&n);
//     // double fenzi = 1.0;
//     // double fenmu = 1.0;
//     // double sum = 0;
//     // double new_fenzi = 0;
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     // 先算出下一项分子
//     //     double new_fenzi = fenzi + fenmu;
//     //     // 累加当前项 new_fenzi / fenzi
//     //     sum = sum + new_fenzi / fenzi;
//     //     // 更新分子分母，准备下一轮
//     //     fenmu = fenzi;
//     //     fenzi = new_fenzi;
//     // }
//     // printf("%.2f\n",sum);
//     // return 0;
    
//     // int a,b;
//     // scanf("%d/%d",&a,&b);
//     // int r;
//     // int c = a;
//     // int d = b;
//     // while (r != 0)
//     // {
//     //     r = c % d;
//     //     c = d;
//     //     d = r;
//     // }
//     // // printf("%d",c);
//     // a = a / c ;
//     // b = b / c ;
//     // printf("约分后为%d/%d\n",a,b);
//     // return 0;

//     // int t;
//     // int r;
//     // scanf("%d",&t);
//     // if (t < 0)
//     // {   
//     //     printf("fu ");
//     //     t = -t;
//     // }
//     // if (t == 0)
//     // {
//     //     printf("ling ");
//     //     return 0;
//     // }
//     // while (t != 0)
//     // {
//     //     r = t % 10;
//     //     t = t / 10;
//     //     switch (r)
//     //     {
//     //     case 1:
//     //         printf("yi ");
//     //         break;
//     //     case 2:
//     //         printf("er ");
//     //         break;
//     //     case 3:
//     //         printf("san ");
//     //         break;
//     //     case 4:
//     //         printf("si ");
//     //         break;
//     //     case 5:
//     //         printf("wu ");
//     //         break;
//     //     case 6:
//     //         printf("liu ");
//     //         break;
//     //     case 7:
//     //         printf("qi ");
//     //         break;
//     //     case 8:
//     //         printf("ba ");
//     //         break;
//     //     case 9:
//     //         printf("jiu ");
//     //         break;
//     //     case 0:
//     //         printf("ling ");
//     //         break;
//     //     }
//     // }

//     // int t;
//     // scanf("%d", &t);

//     // // 处理负数
//     // if (t < 0)
//     // {
//     //     printf("fu ");
//     //     t = -t; // 转正数，防止取模出现负数
//     // }

//     // // 单独处理输入数字0
//     // if (t == 0)
//     // {
//     //     printf("ling ");
//     //     return 0;
//     // }

//     // // 第一步：算出最高位的权重 weight
//     // int weight = 1;
//     // while (t / weight >= 10)
//     // {
//     //     weight = weight * 10;
//     // }

//     // // 第二步：从最高位到个位依次拆分、打印
//     // while (weight > 0)
//     // {
//     //     int r = t / weight; // 取出当前最高位数字
//     //     switch (r)
//     //     {
//     //         case 1: printf("yi "); break;
//     //         case 2: printf("er "); break;
//     //         case 3: printf("san "); break;
//     //         case 4: printf("si "); break;
//     //         case 5: printf("wu "); break;
//     //         case 6: printf("liu "); break;
//     //         case 7: printf("qi "); break;
//     //         case 8: printf("ba "); break;
//     //         case 9: printf("jiu "); break;
//     //         case 0: printf("ling "); break;
//     //     }
//     //     t = t % weight;    // 去掉已经打印的最高位
//     //     weight = weight / 10; // 权重缩小十倍，取下一位
//     // }

//     // return 0;

//     // int a,n;
//     // scanf("%d %d",&a,&n);
//     // int sum = 0;
//     // int t=0;
//     // for (int i = 1; i <= n; i++)
//     // {   
//     //     t = t * 10 + a;
//     //     sum = sum + t;
//     // }
//     // printf("%d\n",sum);


// }
    
// void sum(int begin, int end)
// {
//     int i;
//     int sum = 0;
//     for (i = begin; i <= end; i++)
//     {
//         sum += i;
//     }
//     printf("%d到%d的和是%d\n",begin,end,sum);
// }

// int main()
// {
//     sum(1,10);
//     sum(20,30);
//     sum(35,45);
//     return 0;
// }



// int main()
// {
//     char ch = '0';
//     int result, i, flag = 0;
//     scanf("%d", &result);
//     while( ch != '=' )
//     {
//         scanf("%c", &ch);
//         if(ch == '=')
//             break;
//         scanf("%d", &i);
//         if( ch == '+' )
//             result += i;
//         else if( ch == '-' )
//             result -= i;
//         else if( ch == '*' )
//             result *= i;
//         else if( ch == '/' )
//         {
//             if( i != 0 )
//                 result /= i;
//             else
//                 flag = 1;
//         }
//         else
//             flag = 1;
//     }
//     if(flag)
//         printf("ERROR\n");
//     else
//         printf("%d", result);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char c;
//     c = getchar();
//     // 全部改成单引号 '#'
//     while (c != '#')
//     {
//         // 单引号 'a' 'z'
//         if (c >= 'a' && c <= 'z')
//         {
//             c = c - 32;
//         }
//         // 单引号 'A' 'Z'
//         else if (c >= 'A' && c <= 'Z')
//         {
//             c = c + 32;
//         }
//         // 输出转换后的字符，用%c
//         printf("%c", c);
//         c = getchar();
//     }
//     // return 放到循环外面
//     return 0;
// }


// void swap(int *a, int *b); // 形参改成指针

// int main()
// {
//     int a = 5;
//     int b = 6;
//     swap(&a, &b); // &取变量地址传入
//     printf("a = %d b = %d\n", a, b);
//     return 0;
// }

// // 接收地址，*解引用操作原始变量
// void swap(int *a, int *b)
// {
//     int t = *a;
//     *a = *b;
//     *b = t;
// }

// void swap(int a,int b);

// int main()
// {
//     int a = 5;
//     int b = 6;

//     swap(a,b);
//     printf("a = %d b = %d\n", a, b);
//     return 0;
// }
// void swap(int a, int b)
// {
//     int t = a;
//     a = b;
//     b = t;
// }

// int main()
// {
//     char s[100];
//     int i = 0;
//     do
//     {
//         scanf("%c", &s[i]);
//         i++;
//     } while(s[i-1] != '.');
//     int j;
//     int cnt = 0;
//     int k = 0;
//     for(j=0; j<i; j++)
//     {
//         if(s[j] != ' ')
//         {
//             cnt++;
//             if(k != 0 && s[j] != '.')
//             {
//                 printf(" ");
//                 k = 0;
//             }
//             if(s[j] == '.' && s[j - 1] != ' ' && cnt != 1)
//             {
//                 printf("%d", cnt-1);
//             }
//         }
//         else if(cnt != 0)
//         {
//             printf("%d", cnt);
//             cnt = 0;
//             k = 1;
//         }
//     }
//     return 0;
// }


// int main()
// {
//     int x;
//     double sum = 0;
//     int cnt = 0;
//     int number[100];
//     scanf("%d",&x);
//     while (x != -1)
//     {
//         number[cnt] = x;
//         //
//         {
//             int i;
//             printf("%d\t",cnt);
//             for (i = 0; i <= cnt; i++)
//             {
//                 printf("%d\t",number[i]);
//             }
//             printf("\n");
            
//         }
//         //
//         sum = sum + x;
//         cnt++;
//         scanf("%d",&x);
//     }
//     if (cnt > 0)
//     {
//         printf("%f\n",sum/cnt);
//         int i;
//         for (i = 0; i < cnt; i++)
//         {
//             if (number[i] > sum/cnt)
//             {
//                 printf("%d\n",number[i]);
//             }
            
//         }
        
//     }
    
    
// }

// int main(){

//     int t;
//     scanf("%d",&t);
//     int cnt = 0;
//     int t0=0,t1=0,t2=0,t3=0,t4=0,t5=0,t6=0,t7=0,t8=0,t9=0;
//     while (t != -1)
//     {
//         if (t >=0 && t <= 9)
//         {
//             switch (t)
//             {
//             case 0:
//                 t0++;
//                 break;
//             case 1:
//                 t1++;
//                 break;
//             case 2:
//                 t2++;
//                 break;
//             case 3:
//                 t3++;
//                 break;
//             case 4:
//                 t4++;
//                 break;
//             case 5:
//                 t5++;
//                 break;
//             case 6:
//                 t6++;
//                 break;
//             case 7:
//                 t7++;
//                 break;
//             case 8:
//                 t8++;
//                 break;
//             case 9:
//                 t9++;
//                 break;
//             default:
//                 break;
//             }
//             cnt++;
//             scanf("%d",&t);
//         }
        
//     }
//     printf("出现0%d次,1%d次,2%d次,3%d次,4%d次,5%d次,6%d次,7%d次,8%d次,9%d次",t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);

// }



// void f(int *p);
// void g(int k);

// int main(void)
// {
//     int i = 6;
//     printf("&i = %p\n",&i);
//     f(&i);
//     g(i);
//     return 0;
// }
// void f(int *p)
// {
//     printf(" p = %p\n", p);
//     printf("*p = %d\n",*p);
//     *p = 26;
// }

// void g(int k)
// {
//     printf("k = %d\n",k);
//     k = 7;
// }

// void swap(int *pa, int *pb);

// int main(void)
// {
//     int a = 5;
//     int b = 6;
//     swap(&a,&b);
//     printf("a = %d,b = %d\n",a,b);
//     return 0;
// }

// void swap(int *pa,int *pb)
// {
//     int t = *pa;
//     *pa = *pb;
//     *pb = t;
// }

// void minmax(int a[], int len, int *max, int *min);
// int main(void)
// {
//     int a[] = {1,2,3,4,5,6,7,8,9,12,13,14,16,17,21,23,55,};
//     int min,max;
//     printf("mian sizeof(a) = %lu\n",sizeof(a));
//     minmax(a, sizeof(a)/sizeof(a[0]), &min, &max);
//     printf("min=%d,max=%d\n", min, max);

//     return 0;
// }

// void minmax(int a[], int len, int *min, int *max)
// {
//     int i;
//     printf("minmax sizeof(a) = %lu\n",sizeof(a));
//     *min = *max=a[0];
//     for ( i=1; i<len; i++ ) {
//         if ( a[i] < *min ) {
//             *min = a[i];
//         }
//         if ( a[i] > *max ) {
//             *max = a[i];
//         }
//     }
// }


// int main(void)
// {
//     char ac[] = {0,1,2,3,4,5,6,7,8,9,};
//     char *p = ac;
//     printf("p = %p\n",p);
//     printf("p + 1 = %p\n",p + 1);
//     int ai[] = {0,1,2,3,4,5,6,7,8,9,};
//     int *q = ai;
//     printf("q = %p\n",q);
//     printf("q + 1 = %p\n",q + 1);
//     return 0;
// }




// #include <stdio.h>
// int main(void)
// {
//     int num = 10;
//     int *p;
//     // 填空：让指针p保存num的地址
//     p = &num;
//     // 填空：通过p把num修改为50
//     *p = 50;
//     printf("%d", num); // 要求输出50
//     return 0;
// }



// #include <stdio.h>
// int main(void)
// {
//     int x = 8;
//     int *p = &x;
//     printf("p = %p\n", p);//地址等于下面
//     printf("&x = %p\n", &x);//
//     printf("*p = %d\n", *p);//8
//     *p = 99;
//     printf("x = %d\n", x);//99
//     return 0;
// }

/*

p 存储的是____地址____；
*p 代表____指针指向的变量的值____；
&变量名 的作用是____将变量的地址提取出来____。

*/

// #include <stdio.h>
// void func1(int k)
// {
//     k = 100;
// }
// void func2(int *p)
// {
//     *p = 200;
// }
// int main(void)
// {
//     int a = 10;
//     func1(a);
//     printf("a=%d ", a);// 10
//     func2(&a);
//     printf("a=%d", a);//200
//     return 0;
// }


// int arr[5] = {1,2,3,4,5};
// int *p = &arr[3];
//这题不太明白，为什么要加&,因为后面一题后面有*p = arr没有加&;


// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {10,20,30,40,50};
//     int *p = arr;
//     printf("%d ", *p);//10
//     p = p + 2;
//     printf("%d ", *p);//30
//     *p = 99;
//     printf("%d", arr[2]);//99
//     return 0;
// }

/*
int arr[10];
int *p;
// 写法1
p = &arr[3];
// 写法2
p = ________;
*/

// #include <stdio.h>
// int main(void)
// {
//     int arr[4] = {2,4,6,8};
//     int *p = arr;
//     for(int i=0; i<4; i++)
//     {
//         // 填空打印当前p指向的值
//         printf("%d ", *p);
//         // 填空让p移动到下一个元素
//         *p++;
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int a[3] = {5,6,7};
//     int *p = &a[1];
//     printf("%d ", *(p-1));
//     printf("%d ", *p);
//     printf("%d", *(p+1));
//     return 0;
// }

// #include <stdio.h>
// // 补全swap函数定义
// void swap(int *x,int *y)
// {
//     // 交换*x和*y
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(void)
// {
//     int m = 3, n = 7;
//     swap(&m, &n);
//     printf("m=%d n=%d\n", m, n); // 输出m=7 n=3
//     return 0;
// }

// #include <stdio.h>
// void test(int *p)
// {
//     *p = 666;
// }
// int main(void)
// {
//     int num = 10;
//     int *p2 = &num;
//     test(&num);
//     return 0;
// }

// #include <stdio.h>
// void change1(int k)
// {
//     k *= 2;
// }
// void change2(int *k)
// {
//     *k *= 2;
// }
// int main(void)
// {
//     int x = 5;
//     change1(x);
//     printf("%d ", x);
//     change2(&x);
//     printf("%d", x);
//     return 0;
// }

// #include <stdio.h>
// int main(void)
// {
//     int arr[] = {1,3,5,7};
//     int *p = arr + 1;
//     *p = 100;
//     p++;
//     printf("%d %d", arr[1], *p);//100，5
//     return 0;
// }


// void doubleArr(int *p,int len);

// int main()
// {
//     int arr[] = {1,2,3,4,5,6,};
//     mltui(arr,sizeof(arr)/sizeof(arr[0]));
//     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// void doubleArr(int *p,int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         *p *= 2;
//         p++;
//     }
    
// }
    
// int main(void)
// {
//     int num[5] = {2,4,6,8,10,};
//     int len = sizeof(num)/sizeof(num[0]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ",num[i]);
//     }
//     printf("\n");
//     int *p = &num;
//     for (int i = 0; i < len; i++)
//     {   
//         *p = *p + 3;
//         printf("%d ",*p);
//         p++;
//     }
//     printf("\n");
    
// }


// void addOne(int *p, int length);

// int main(void)
// {
//     int arr[4]={10,20,30,40,};
//     addOne(&arr, sizeof(arr)/sizeof(arr[0]));
//     printf("\n");
// }

// void addOne(int *p, int length)
// {
//     for (int i = 0; i < length; i++)
//     {
//         *p += 1;
//         printf("%d ",*p);
//         p++;
//     }
    
// }

// int main()
// {
//     int a[6]={5,1,9,3,7,2,};
//     int *p = &a[2];
//     *p = 99;
//     int len = sizeof(a)/sizeof(a[0]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     printf("\n");

// }

// int main(void)
// {
//     int score[8]={60,72,88,55,91,44,77,82};
//     int *p = &score[4];
//     printf("%d ",*p);
//     *p = 100;
//     p = p - 2;
//     printf("%d ",*p);
//     printf("\n");
//     int len = sizeof(score)/sizeof(score[0]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ", score[i]);
//     }
//     printf("\n");
// }



// int findMax(int *p, int len);

// int main(void)
// {
//     int data[7]={12,45,7,89,23,56,33,};
//     int len = sizeof(data)/sizeof(data[0]);
//     findMax(data,len);
//     printf("\n");
// }

// int findMax(int *p, int len)
// {   
//     int max = *p;
//     for (int i = 0; i < len; i++)
//     {
//         if (*p > max)
//         {
//             max = *p;
//         }
//         p++;
//     }
//     printf("%d",max);
// }

//////////////////////////////////////////////////////////////////////////

// void reverseArr(int *p, int len);

// int main(void)
// {
//     int num[6]={1,2,3,4,5,6,};
//     int len = sizeof(num)/sizeof(num[0]);
//     reverseArr(&num[len-1],len);
//     printf("\n");

// }

// void reverseArr(int *p, int len)
// {
//     for (int i = len - 1; i >= 0; i--)
//     {
//         printf("%d ",*p);
//         p--;
//     }
    
// }


// void swap(int *x, int *y);

// int main(void)
// {
//     int arr[5]={10,20,30,40,50};
//     int len = sizeof(arr)/sizeof(arr[0]);
//     swap(arr,&arr[len-1]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }


// void swap(int *x, int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;

// }


// #include <stdio.h>
// void filterOdd(int *p, int len);

// int main(void)
// {
//     int nums[7]={1,2,3,4,5,6,7};
//     int len = sizeof(nums)/sizeof(nums[0]);
//     filterOdd(nums,len);
//     // main遍历打印最终数组
//     for(int i=0; i<len; i++)
//     {
//         printf("%d ", nums[i]);
//     }
//     printf("\n");
//     return 0;
// }
// // void filterOdd(int *p, int len)
// // {
// //     // 用i计数，不重置指针p
// //     for(int i = 0; i < len; i++)
// //     {
// //         if (*p % 2 != 0)
// //         {
// //             *p = 0;
// //         }
// //         p++; // 指针后移一位
// //     }
// // }
// void filterOdd(int *p, int len)
// {
//     int *end = p + len; // 算出数组末尾地址
//     while(p < end)
//     {
//         if (*p % 2 != 0)
//             *p = 0;
//         p++;
//     }
// }


// int calcSum(int *p, int len);

// int main(void)
// {
//     int money[5]={100,200,300,400,500};
//     int len = sizeof(money)/sizeof(money[0]);
//     calcSum(money,len);
//     printf("\n");
// }

// int calcSum(int *p, int len)
// {
//     int *end = p + len;
//     int sum = 0;
//     while ((p < end))
//     {
//         sum += *p;
//         p++;
//     }
//     printf("%d",sum);
// }



// int main(void)
// {
//     int buf[6]={3,6,9,12,15,18};
//     int *p = buf;
//     int len = sizeof(buf)/sizeof(buf[0]);
//     for (int i = 0; i < len; i++)
//     {
//         printf("%d ",*p);
//         p++;
//     }
//     printf("\n");
//     int *q = buf;
//     for (int j = 0; j < len; j++)
//     {
//         *q /= 3;
//         printf("%d ",*q);
//         q++;
//     }
//     printf("\n");
// }

#include <stdio.h>
int copyOdd(int *src, int *dst, int len);

int main(void)
{
    int src[8] = {2,7,9,4,11,6,13,8}; 
    int dst[8] = {0};
    int len = sizeof(src)/sizeof(src[0]);
    int count0 = copyOdd(src,dst,len);
    
    printf("奇数总个数：%d\n", count0);
    // 打印dst里存的奇数
    int *p = dst; // 用新指针从头遍历dst
    for(int i = 0; i < count0; i++)
    {
        printf("%d ", *p);
        p++;
    }
    printf("\n");
    return 0;
}

int copyOdd(int *src, int *dst, int len)
{
    int cnt = 0;
    int *end = src + len;
    while (src < end) // 边界修正，不越界
    {
        if (*src % 2 != 0)
        {
            *dst = *src;
            dst++;
            cnt++; // 存入一个奇数，计数+1
        }
        src++;
    }
    return cnt; // 只返回数量，不打印
}


































