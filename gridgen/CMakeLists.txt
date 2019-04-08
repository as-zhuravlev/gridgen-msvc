SET(SRC_FILES
    broyden.c
    delaunay.c
    geom.c
    gridgen.c
    hash.c
    issimplepoly.c
    istack.c
    ode.c
    swcr.c
    vertlist.c
    zode.c)        
    
    
    
SET(HEADER_FILES
    broyden.h
    delaunay.h
    geom.h
    gridgen.h
    hash.h
    issimplepoly.h
    istack.h
    nan.h
    ode.h
    swcr.h
    version.h
    vertlist.h
    zode.h)
    
set(ALL_FILES
    ${SRC_FILES}
    ${HEADER_FILES})
    
add_executable(gridgen ${ALL_FILES})