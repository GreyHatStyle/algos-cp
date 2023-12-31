const int M = 1e9 + 7;

int binModExp(int a, int b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans *1LL* a)%M;
		}
		a = (a *1LL*a) % M;
		b>>=1;
	}
	return ans;
}

//-------------------------------------------------------------------------
// If a or M gets larger....
const long long M = 1e18+7;

long long binMulti(long long a, long long b){
	long long ans=0;
	while(b){
		if(b&1){
			ans = (a+ans)%M;
		}
		a = (a+a)%M;
		b >>= 1;
	}
	return ans;
}
int binModExp(long long a, long long b){
	int ans = 1;
	while(b){
		if(b&1){
			ans = binMulti(ans,a);
		}
		a = binMulti(a,a);
		b>>=1;
	}
	return ans;
}

//----------------------------------------------------------------------------
// If (a ^ b ^ c) triple power

const int M = 1e9 + 7;

int binModExp(int a, int b, int m){
	int ans = 1;
	while(b){
		if(b&1){
			ans = (ans *1LL* a)%m;
		}
		a = (a *1LL*a) % m;
		b>>=1;
	}
	return ans;
}
binModExp(a, binModExp(b,c,M-1),M);
