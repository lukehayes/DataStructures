module DS
  module NodeTraits
    def next_node_nil?(node)
      node.next_node === nil
    end
  end
end
