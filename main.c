#include "javascript.h"
#include "key.h"

Object obj;

$({

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
