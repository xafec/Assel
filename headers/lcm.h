#ifndef LCM_H
#define LCM_H


class lcm {
public:
   int n = 3;
   int array[3]{};

   lcm();

   lcm(int b);

   int max();

   int llcm(int a, int b);

   lcm operator*(lcm &lcm2);
};

#endif //LCM_H
