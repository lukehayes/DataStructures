class TreeNode(object):

    def __init__(self, value, left_node = None, right_node = None):
        self.value = value
        self.left  = left_node
        self.right = right_node

    def __repr__(self):
        return "Node Value: {}, Left Node: {}, Right Node: {}\n".format(self.value, self.left, self.right)
