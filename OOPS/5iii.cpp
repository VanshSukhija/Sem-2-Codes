#include <iostream>
using namespace std;
class array
{
private:
    int arr;

public:
    array()
    {
        arr = 0;
    };
    void set(int a)
    {
        arr = a;
    }
    int get()
    {
        return (arr);
    }
    ~array(){
        // cout<<"descructor invoked";
    };
};
int binary_search(class array arr[], int h, int key)
{
    int l = 1, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid].get())
            return (mid);
        if (key < arr[mid].get())
            h = mid - 1;
        else
            l = mid + 1;
    }
    return (0);
}
void bubble(class array arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j].get() > arr[j + 1].get())
            {
                temp = arr[j].get();
                arr[j].set(arr[j + 1].get());
                arr[j + 1].set(temp);
            }
        }
    }
}
int main()
{
    int x, a, key, j;
    array arr[10];
    printf("enter the element of sorted array elements=\n");
    for (x = 0; x < 10; x++)
    {
        scanf("%d", &a);
        arr[x].set(a);
    }
    printf("enter the value of key=");
    scanf("%d", &key);
    j = binary_search(arr, 10, key);
    if (j != 0)
        printf("found the element");
    else
        printf("not found the element");
    printf("\nenter the element of array elements=\n");
    for (x = 0; x < 10; x++)
    {
        scanf("%d", &a);
        arr[x].set(a);
    }
    bubble(arr, 10);
    printf("sorted array=\n");
    for (x = 0; x < 10; x++)
    {
        printf("%d ", arr[x].get());
    }
}