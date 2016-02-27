CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		erlvpn.o

LIBS =

TARGET =	erlvpn

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
