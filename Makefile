CXX = g++
CXXFLAGS = `fltk-config --cxxflags`
LDFLAGS = `fltk-config --ldflags`

editor: editor.cpp editor.h callbacks.cpp
	$(CXX) editor.cpp callbacks.cpp $(CXXFLAGS) $(LDFLAGS) -o editor

clean:
	rm -f editor
