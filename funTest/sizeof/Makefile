#Makefile 文件中的特殊变量“VPATH”就是完成这个功能的，如果没有指明这个变量，
#make 只会在当前的目录中去找寻依赖文件和目标文件。如果定义了这个变量，那么，make
#就会在当当前目录找不到的情况下，到所指定的目录中去找寻文件了。
#VPATH = ../../logUtils

#另一个设置文件搜索路径的方法是使用 make 的“vpath”关键字（注意，它是全小写
#的），这不是变量，这是一个 make 的关键字，这和上面提到的那个 VPATH 变量很类似，但是
#它更为灵活。它可以指定不同的文件在不同的搜索目录中。这是一个很灵活的功能。它的使
#用方法有三种：
#1、vpath <pattern> <directories>
#为符合模式<pattern>的文件指定搜索目录<directories>。
#2、vpath <pattern>
#清除符合模式<pattern>的文件的搜索目录。
#3、vpath
#清除所有已被设置好了的文件搜索目录。
vpath %.h ../../logUtils

sizeof:sizeof.o
	cc -o sizeof sizeof.o

sizeof.o:sizeof.c logUtils.h
	cc -c sizeof.c
	
#当然，为了避免和文件重名的这种情况，我们可以使用一个特殊的标记“.PHONY”来显
#示地指明一个目标是“伪目标”，向 make 说明，不管是否有这个文件，这个目标就是“伪
#目标”。
#.PHONY : clean
#只要有这个声明，不管是否有“clean”文件，要运行“clean”这个目标，只有“make clean”
.PHONY : clean
clean:
	-rm sizeof *.o *.out
	
