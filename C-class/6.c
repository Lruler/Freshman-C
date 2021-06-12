// 编写一个程序，输入两个包含10个元素的数组，先将第一个数组采用冒泡法进行降序排列，第二个数组采用选择排序进行降序排列，然后将这两个数组合并成一个降序数组。

#include <stdio.h>
int main()
{
    int nums[20];
    int nums1[10], nums2[10];

    printf("请输入第一个数组：\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &nums1[i]);
    printf("请输入第二个数组：\n");
    for (int i = 0; i < 10; i++)
        scanf("%d", &nums2[i]);

    // 冒泡排序降序
    int temp;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (nums1[j] < nums1[j + 1])
            {
                int temp = nums1[j];
                nums1[j] = nums1[j + 1];
                nums1[j + 1] = temp;
            }
        }
    }

    // 选择排序降序
    for (int i = 0; i < 9; i++)
    {
        int max = i;
        for (int j = i + 1; j < 9; j++)
        {
            if (nums2[max] < nums2[j])
            {
                max = j;
            }
        }
        if (max != i)
        {
            int b = nums2[i];
            nums2[i] = nums2[max];
            nums2[max] = b;
        }
    }

    // for (int i = 0; i < 10; i++)
    //     printf("%d ", nums2[i]);

    // 合并数组
    for (int i = 0; i < 20; i++)
    {
        if (i < 10)
            nums[i] = nums1[i];
        else if (i >= 10)
            nums[i] = nums2[i - 10];
    }

    // 降序排序
    int temp1;
    for (int i = 0; i < 19; i++)
    {
        for (int j = 0; j < 19 - i; j++)
        {
            if (nums[j] < nums[j + 1])
            {
                int temp1 = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp1;
            }
        }
    }

    for (int i = 0; i < 20; i++)
        printf("%d  ", nums[i]);

    return 0;
}
// 2 7 13 4 28 9 1 8 33 17
// 8 9 21 6 32 87 1 33 6 22