#define BINOMIAL
#ifndef BINOMIAL

class Binomial {
    double coefft1, coefft2;
    int power1, power2;
    public:
    Binomial (double c1 = 1.0, int p1 = 1, double c2 = 1.0, int p2 = 1);
    int Add (const Binomial other);
    int SetPower (int idx, int pwr);
    int GetPower(int idx) const;
    double GetCoefficient (int idx) const;
    void Multiply (double coefft, int pwr);
    void Multiply (double f);
};

#endif