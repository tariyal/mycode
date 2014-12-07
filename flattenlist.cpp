/*
struct node
{
    int data;
    struct node *next;
    struct node *child;
};
*/
void flattenlist(struct node* head)
{
	queue<struct node* > q;
	if(head==NULL)
		return;
	while(1)
	{
		if(head->child!=NULL)
			q.push(head->child);
		if(head->next==NULL)
		{
			if(q.size()==0)
				return ;
			else
			{
				head->next = q.front();
				head = head->next;
				q.pop();
			}
		}
		else
			head= head->next;
	}
}
