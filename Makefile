all:
  gcc main.c vector_w.c -o vector_app

clean:
  rm -f vector_app
