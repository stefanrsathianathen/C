#define N 10000

int main(int argc, char const *argv[]) {
  int A[N], i;
  for (i = 0; i < N; i++) {
      A[i] = i*i;
  }
  for ( i = 0; i < N; i++) {
    printf(" A[%d]=%d ", i, A[i] );
  }
  return 0;
}
