class Test
{

    static int gcd(int a, int b)
    {
    if (a == 0)
        return b;
    return gcd(b % a, a);
    }

    static int lcm(int a, int b)
    {
        return (a*b)/gcd(a, b);
    }

    public static void main(String[] args)
    {
        int a = 15, b = 20;
        System.out.println("LCM of " + a +" and " + b + " is " + lcm(a, b));
    }
}
