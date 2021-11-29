#include <linux/kernel.h>
#include <linux/syscalls.h>
#include <stdio.h>
#include "buffer.h"


long init_buffer_421(void){
  ring_buffer *ring = new ring_buff;
  ring.write = ring.read;

  for(int i = 0; i < SIZE_OF_BUFFER; i++){
    ring.write->next = new node_421_t;
    ring.write = ring.write->next;
    ring.write->data = 0;
  }
  ring.write->next = ring.read;
  ring.write = ring.read
}
/*long insert_buffer_421(int i){
  
  ring.write->data = i;
  ring.write = ring.write->next;
}
  long print_buffer(void);
  long delete_buffer(void);
*/

