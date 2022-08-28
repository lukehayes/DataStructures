class List(object):

    def __init__(self):
        self.head = None

    def add(self, node):

        if self.head == None:
            self.head = node
            return
        else:
            current = self.head

            while (current.next is not None):
                current = current.next

            if(current.next == None):
                current.next = node

        while (current.next is not None):
            current = current.next

    def all(self):
        current = self.head
        print(current.value)
        while current.next is not None:
            print(current.value)
            current = current.next
