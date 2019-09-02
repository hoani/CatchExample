FLAGS = -Wall

G++ = g++

TESTS = TestMain.o adderTest.o
SOURCE = adder.o

.PHONY: all
all: test app

app: app.exe

test: test.exe runTest

.PHONY: runTest
runTest:
	.\test.exe

.PHONY: clean
clean:
	rm -f ./*.o ./*.exe

%.o: %.cpp
	$(G++) $(FLAGS) -c -o $@ $<

app.exe: main.o $(SOURCE)
	$(G++) $(FLAGS) $^ -o $@

test.exe: $(TESTS) $(SOURCE)
	$(G++) $(FLAGS) $^ -o $@