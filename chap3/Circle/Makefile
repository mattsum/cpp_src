main : Circle.o main.o
	g++ Circle.o main.o -o main

Circle.o : Circle.cpp
	g++ -c Circle.cpp

main.o : main.cpp
	g++ -c main.cpp

clean :
	rm *.o main

# # 컴파일러
# CC=g++
# # 컴파일러 플래그
# CFLAGS=-c -Wall

# # 실행 파일 이름
# EXECUTABLE=myprogram

# # 소스 파일 디렉토리 및 객체 파일 디렉토리
# SRCDIR=src
# OBJDIR=obj

# # 소스 파일 목록 및 객체 파일 목록
# SOURCES=$(wildcard $(SRCDIR)/*.cpp)
# OBJECTS=$(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# # 실행 파일 생성 규칙
# $(EXECUTABLE): $(OBJECTS)
#     $(CC) $(OBJECTS) -o $@

# # 객체 파일 생성 규칙
# $(OBJDIR)/%.o: $(SRCDIR)/%.cpp
#     $(CC) $(CFLAGS) $< -o $@

# # clean 규칙: 빌드된 파일들 삭제
# clean:
#     rm -f $(OBJDIR)/*.o $(EXECUTABLE)

# 위의 Makefile에서는 다음과 같은 작업을 수행합니다.

#    1. CC 변수에 컴파일러를 설정합니다.
#    2. CFLAGS 변수에 컴파일러 플래그를 설정합니다.
#    3. EXECUTABLE 변수에 실행 파일의 이름을 설정합니다.
#    4. SRCDIR 변수에 소스 파일의 디렉토리를 설정합니다.
#    5. OBJDIR 변수에 객체 파일의 디렉토리를 설정합니다.
#    6. SOURCES 변수에 소스 파일의 목록을 설정합니다.
#    7. OBJECTS 변수에 객체 파일의 목록을 설정합니다.
#    8. $(EXECUTABLE) 규칙을 통해 실행 파일을 생성합니다.
#    9. $(OBJDIR)/%.o 규칙을 통해 객체 파일을 생성합니다.
#    10. clean 규칙을 통해 빌드된 파일들을 삭제합니다.