# frozen_string_literal: true

class Tree
  attr_accessor :left, :right, :root

  def initialize(root_value)
    @root = root_value
  end

  def insert_left(value)
    @left = value
  end

  def insert_right(value)
    @right = value
  end

end

