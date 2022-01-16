## Week3 Quiz: Code 보고 Segment 파악하기

1. const int g2 = 45;
    - const keyword가 있는 Gloval Variable 
    - const / rodata Sub-segment (-> Code Segment) -> Read Permission -> Program Lifetime
  
2. char g3 = 12;
    - 초기화가 되어 있는 Global Variable 
    - data Sub-segment (-> Data Segment) -> RW Permission -> Program Lifetime
    
3. #define N (10U)
    - define 이므로 어떠한 Segment에도 속하지 않고 Pre-processing으로 처리가 됨
    
4. register int l1;
    - register keyword가 있는 Local Variable 
    - 어떤 Segment에 속하지 않고 register에 속하고 Function Lifetime
    
5. volatile int l3 = 12;
    - volatile keyword가 있는 Local Variable 로 Local Variable과 같은 Segment임 
    - Stack Sub-segment (-> Data Segment) -> RW Permission -> Function  Lifetime

6. #define SOME_VALUE (6)
    - define이므로 어떤 Segment에 속하지 않고 Pre-processing

7. unsigned int f3 = 0;
    - Function 안에 있은 Local Variable 
    - Stack Sub-segment (-> Data Segment) -> RW Permission -> Function Lifetime

8. "Hello World!\n";
    - String 이므로 const / rodata Sub-segment (-> Code Segment) -> Read Permission -> Program Lifetime

9. int func(int * f1)
    - functon 이므로 Code Sub-segment (-> Text Segment) -> Read Permission -> Program  Lifetime
