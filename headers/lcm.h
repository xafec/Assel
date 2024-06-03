#ifndef LCM_H
#define LCM_H


class lcm {
public:
   int n = 3;
   int array[3]{};

   lcm();

   lcm(int b);

   int max();

   lcm operator*(const lcm &lcm2);
};

#endif //LCM_H
