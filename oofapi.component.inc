<?php

class OofapiComponent {

  public $access;
  public $type;

  public function render() {
    return array(
      '#access' => $this->access,
      '#type' => $this->type,
      );
  }
}
