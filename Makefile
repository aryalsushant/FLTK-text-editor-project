CXX = g++
CXXFLAGS = `fltk-config --cxxflags`
LDFLAGS = `fltk-config --ldflags`

editor: editor.cpp editor.h
    $(CXX) editor.cpp $(CXXFLAGS) $(LDFLAGS) -o editor

clean:
    rm -f editor
