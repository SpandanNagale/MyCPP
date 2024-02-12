#include <iostream> 
 using namespace std ;
 struct stack{
     int size;
     int top;
     int * arr[];
 };
  void isEmpty(struct stack* ptr)
  {
    if(ptr->top<0){
        cout<<"stack is empty ";
    }
  }

  void isFull(struct stck * ptr)
  {
    if(ptr->top>== ptr->size-1){
        cout<<"stack is full";
    }
  }
   void push(struct stack*ptr, int val)
   { if (isFull(ptr)){
    return 0
   }else{
      ptr->top++;
      ptr->arr[ptr->top]=val;
   }

   }
 int main(){
        struct stack*sp=(struct stack*)malloc(sizeof(struct stack));
        sp->size=10;
        sp->top=-1;
        sp->arr=(int*)malloc(sp->size*sizeof(int));

        push(sp,10);
        
return 0;
}