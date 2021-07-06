#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Studentdetail
{
    int sid;
    char sname[100];
    char ssex[100];
    int sage;
};
struct Classdetail
{
    int classId;
    int classNum;
    struct Studentdetail student[100];
};
struct School
{
    int schoolNum;
    struct Classdetail Class[100];
} s;

void addStuden()
{
    int id, age, classid;
    char name[100];
    char sex[100];
    printf("将学生录入哪个班级");
    scanf("%d", &classid);
    printf("该学生的学号:");
    scanf("%d", &id);
    printf("该学生的姓名:");
    scanf("%s", name);
    printf("该学生的年龄:");
    scanf("%d", &age);
    printf("该学生的性别:");
    scanf("%s", sex);
    s.Class[classid].student[s.Class[classid].classNum].sid = id;
    strcpy(s.Class[classid].student[s.Class[classid].classNum].sname, name);
    strcpy(s.Class[classid].student[s.Class[classid].classNum].ssex, sex);
    s.Class[classid].student[s.Class[classid].classNum].sage = age;
}

void getSchooldetail()
{
    int i, j;
    for (i = 0; i < s.schoolNum; i++)
    {
        printf("班级:%d................................\n", s.Class[i].classId);
        for (j = 0; j < s.Class[i].classNum; j++)
        {
            printf("%d\t", s.Class[i].student[j].sid);
            printf("%s\t", s.Class[i].student[j].sname);
            printf("%s\t", s.Class[i].student[j].ssex);
            printf("%d\n", s.Class[i].student[j].sage);
        }
    }
}
void getStudentdetailByid(int id)
{
    int flag = 0;
    for (int i = 0; i < s.schoolNum; i++)
    {
        if (flag == 1)
        {
            break;
        }
        for (int j = 0; j < s.Class[i].classNum; j++)
        {
            if (s.Class[i].student[j].sid == id)
            {
                printf("班级:%d\t", s.Class[i].classId);
                printf("学号:%d\t", s.Class[i].student[j].sid);
                printf("姓名:%s\t", s.Class[i].student[j].sname);
                printf("性别:%s\n", s.Class[i].student[j].ssex);
                flag = 1;
                break;
            }
        }
    }
}
void delStudentByid(int id)
{
    int flag = 0;
    for (int i = 0; i < s.schoolNum; i++)
    {
        if (flag == 1)
        {
            break;
        }
        for (int j = 0; j < s.Class[i].classNum; j++)
        {
            if (s.Class[i].student[j].sid == id)
            {
                s.Class[i].student[j] = s.Class[i].student[s.Class[i].classNum];
                s.Class[i].classNum--;
                flag = 1;
                break;
            }
        }
    }
}
void fixStudentdetailByid(int id)
{
    int flag = 0;
    char ch[100];
    int age;
    for (int i = 0; i < s.schoolNum; i++)
    {
        if (flag == 1)
        {
            break;
        }
        for (int j = 0; j < s.Class[i].classNum; j++)
        {
            if (s.Class[i].student[j].sid == id)
            {
                printf("请输入新的信息....\n");
                printf("学生学号:");
                scanf("%d", &s.Class[i].student[j].sid);
                printf("学生姓名:");
                scanf("%s", ch);
                strcpy(s.Class[i].student[j].sname, ch);
                memset(ch, '\0', 100);
                printf("学生年龄:");
                scanf("%d", &s.Class[i].student[j].sage);
                printf("学生性别:");
                scanf("%s", ch);
                strcpy(s.Class[i].student[j].ssex, ch);
                flag = 1;
                break;
            }
        }
    }
}
void sortByid()
{
    struct Studentdetail tmp;
    for (int i = 0; i < s.schoolNum; i++)
    {
        for (int j = 0; j < s.Class[i].classNum; j++)
        {
            for (int k = j; k < s.Class[i].classNum; k++)
            {
                if (s.Class[i].student[j].sid > s.Class[i].student[k].sid)
                {
                    tmp = s.Class[i].student[j];
                    s.Class[i].student[j] = s.Class[i].student[k];
                    s.Class[i].student[k] = tmp;
                }
            }
        }
    }
}
int main()
{
    int a = 0, i, j, b = 0;
    int id;
    char ch[100];
    printf("创建学校:.....0创建，.......1退出: ");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("已经退出\n");
        exit(-1);
    }
    s.schoolNum = 0;
    printf("为学校开创多少个班级\n");
    scanf("%d", &a);
    printf("请输入这些班级的id:\n");
    for (i = 0; i < a; i++)
    {
        scanf("%d", &s.Class[i].classId);
        s.Class[i].classNum = 0;
        s.schoolNum++;
    }
    for (i = 0; i < a; i++)
    {
        printf("为id为%d的班级初始化他的学生\n", s.Class[i].classId);
        j = 0;
        while (1)
        {
            printf("学生学号:");
            scanf("%d", &s.Class[i].student[j].sid);
            printf("学生姓名:");
            scanf("%s", ch);
            strcpy(s.Class[i].student[j].sname, ch);
            memset(ch, '\0', 100);
            printf("学生年龄:");
            scanf("%d", &s.Class[i].student[j].sage);
            printf("学生性别:");
            scanf("%s", ch);
            strcpy(s.Class[i].student[j].ssex, ch);
            s.Class[i].classNum++;
            j++;

            printf("是否继续为该班级输入:继续输入.....0  退出......1: ");
            scanf("%d", &b);
            if (b == 1)
            {
                break;
            }
        }
    }
    printf("初始化完成，请选择您的操作..\n");
lable:
    printf("\t.|1.录入学生..................|\n");
    printf("\t.|2.查看学校信息..............|\n");
    printf("\t.|3.查找学生--根据学号........|\n");
    printf("\t.|4.开除学生--根据学号........|\n");
    printf("\t.|4.修改信息--根据学号........|\n");
    printf("\t.|5.各班级按学号排序后输出信息.|\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        addStuden();
        break;

    case 2:
        getSchooldetail();
        break;
    case 3:
        printf("请输入需查找学生的学号:");
        scanf("%d", &id);
        getStudentdetailByid(id);
        break;
    case 4:
        printf("请输入需要开除的学生的学号:");
        scanf("%d", &id);
        delStudentByid(id);
        break;
    case 5:
        sortByid();
        getSchooldetail();
        break;
    }
    printf("是否再次操作：否.......0  是......1: ");
    scanf("%d", &a);
    if (a == 1)
    {
        goto lable;
    }
    printf("已经退出系统\n");
}