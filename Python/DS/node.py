class Node(object):

    def __init__(self, value, next_node = None):
        self.next = next_node
        self.value = value

    def __repr__(self):
        return "Node Value: {}, Next Node: {}\n".format(self.value, self.next)
