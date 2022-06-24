// WAP to implement Merge Sort on 1D array of Student structures (contains student_name, student_roll_no, total_marks) with key as student_roll_no.
#include<stdio.h>
typedef struct student{
    char name[20];
    int rollno;
    int marks;
}stud;

void merge(stud st[], int l, int mid, int h){
    int n1 = mid - l + 1;
    int n2 = h - mid;
    stud temp1[n1], temp2[n2];
    for(int i=0; i<n1; i++){
        temp1[i] = st[l+i];
    }
    for(int i=0; i<n2; i++){
        temp2[i] = st[mid+1+i];
    }
    int i=0, j=0, k=l;
    while(i<n1 && j<n2){
        if(temp1[i].rollno<=temp2[j].rollno)
            st[k++] = temp1[i++];
        else
            st[k++] = temp2[j++];
    }
    while(i<n1){
        st[k++] = temp1[i++];
    }
    while(j<n2){
        st[k++] = temp2[j++];
    }
}

void mergesort(stud st[], int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        mergesort(st, l, mid);
        mergesort(st, mid+1, h);
        merge(st, l, mid, h);
    }
}

void main(){
    int n;
    printf("Enter the number of students in class: ");
    scanf("%d", &n);
    stud st[n];
    for(int i=0; i<n; i++){
        fflush(stdin);
        printf("Enter name of student %d: ", i+1);
        gets(st[i].name);
        printf("Enter Roll no.: ");
        scanf("%d", &st[i].rollno);
        printf("Enter Total Marks: ");
        scanf("%d", &st[i].marks);
        printf("\n");
    }

    mergesort(st, 0, n);
    
    printf("---After sorting---\n");
    for(int i=0; i<n; i++){
        printf("\n");
        puts(st[i].name);
        printf("%d\n", st[i].rollno);
        printf("%d\n", st[i].marks);
    }
}