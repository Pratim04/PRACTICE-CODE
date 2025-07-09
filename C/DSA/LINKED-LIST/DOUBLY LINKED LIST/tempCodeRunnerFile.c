head->prev = NULL;
    head->data = 45;
    head->next = ptr;

    ptr->prev = head;
    ptr->data = 66;
    ptr->next = ptr1;

    ptr1->prev = ptr;
    ptr1->data = 58;
    ptr1->next = NULL;