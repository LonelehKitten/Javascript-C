#include "javascript.h"
#include "key.h"
#include "stdjs.h"

Object obj;

$({

    printf("\n\n%d\n\n", type.INT);

    obj.on("keypress", function( void, {
        
        if(getKey() == 'a') printf("Callback done!");
        
    }), 0);
    
    /**
    *   Teste id do evento, não pode dar callback
    **/
    obj.on("anything", function( void, {
        
        if(getKey() == 'a') printf("Callback done!");
        
    }), 0);

})
