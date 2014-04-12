CC=g++

# INCLUDE=-I/usr/local/include -I/s/fltk/include `fltk-config --cxxflags`
CPPFLAGS=-g $(shell fltk-config --use-gl --use-images --cxxflags) -I. -lGL -lGLU 
# if you want to all warning flags add "-Wall" flag

# LIB=-L/usr/local/lib -L/usr/lib  -lGL -lGLU 
# LDFLAGS=$(LIB)
LDFLAGS = $(shell fltk-config --use-gl --use-images --ldflags)


# -L/p/graphics/local/packages/fltk-1.0.11/lib -L/usr/X11R6/lib

SRC=Cell.cpp Edge.cpp LineSeg.cpp MapWidget.cpp Maze.cpp MazeWindow.cpp RunMaze.cpp Vertex.cpp
OBJS=$(SRC:.cpp=.o)

BUILDSRC=Cell.cpp Edge.cpp LineSeg.cpp MapWidget.cpp Maze.cpp MazeWindow.cpp BuildMaze.cpp Vertex.cpp
BUILDOBJS=$(BUILDSRC:.cpp=.o)

runmaze: $(OBJS)
	g++ -o $@ $(OBJS) $(LDFLAGS)

buildmaze: $(BUILDOBJS)
	g++ -o $@ $(BUILDOBJS)  $(LDFLAGS)

depend:
	makedepend -- $(INCLUDE) -- $(SRC) $(BUILDSRC)

clean:
	rm -r *.o


# DO NOT DELETE