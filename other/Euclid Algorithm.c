
//原理： 若存在a > b, a= kb + r成立(k >= 1).
// r = a % b
// 若最大公因子c, 则有a % c = kb % c + r % c
// 因为 a %c == 0 == b % c
// 所以 r% c = 0 成立
// Gcd(a, b) = Gcd(b, r)
// 当r = 0 时， 即可求出
unsigned int Gcd(unsigned int M, unsigned int N)
{
	unsigned int Rem;
	while (N > 0)
	{
		Rem = M % N;
		M = N;
		N = Rem;
	}
	return M;
}
