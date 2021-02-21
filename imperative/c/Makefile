# single line comment starts with the # symbol

# this is the first make target, so it is the default.
# it depends on two other targets as the dependencies
default: build run


# creating an executable with the compiler, and saving it as helloworld
# otherwise the default output is a.out
build:
	gcc helloworld.c -o helloworld

# this runs the compiled version
run:
	./helloworld

time_now: 
	gcc time_now.c -o time_now
	./time_now


clean:
	rm time_now helloworld 
