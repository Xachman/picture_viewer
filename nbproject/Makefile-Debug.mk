#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=MinGW-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/DropTarget.o \
	${OBJECTDIR}/FileList.o \
	${OBJECTDIR}/Frame.o \
	${OBJECTDIR}/Image.o \
	${OBJECTDIR}/ImageFrame.o \
	${OBJECTDIR}/ImagePanel.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L../../../../wxWidgets/github/lib/gcc_dll -lwxmsw31u_core -lwxbase31u -lwxtiff -lwxjpeg -lwxpng -lwxzlib -lwxexpat -lwxregexu -lgdi32 -lcomctl32 -lole32 -luuid -loleaut32 -lcomdlg32 -lwinspool

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/picture_viewer.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/picture_viewer.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/picture_viewer ${OBJECTFILES} ${LDLIBSOPTIONS} -mwindows

${OBJECTDIR}/DropTarget.o: DropTarget.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/DropTarget.o DropTarget.cpp

${OBJECTDIR}/FileList.o: FileList.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/FileList.o FileList.cpp

${OBJECTDIR}/Frame.o: Frame.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Frame.o Frame.cpp

${OBJECTDIR}/Image.o: Image.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Image.o Image.cpp

${OBJECTDIR}/ImageFrame.o: ImageFrame.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImageFrame.o ImageFrame.cpp

${OBJECTDIR}/ImagePanel.o: ImagePanel.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ImagePanel.o ImagePanel.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -DSFML_STATIC -D__UNICODE -D__WXMSW__ -I../../../../wxWidgets/github/lib/gcc_dll/mswu -I../../../../wxWidgets/github/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
