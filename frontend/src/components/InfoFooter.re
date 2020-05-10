module Styles = {
  open Css;

  let wrapper =
    style([marginTop(px(50)), marginBottom(px(20)), position(relative)]);

  let span =
    style([
      display(inline),
      fontFamily(`custom("Poppins")),
      fontWeight(`num(400)),
      fontSize(px(12)),
      lineHeight(em(1.5)),
      color(hex("111111")),
      textAlign(`right),
      textDecoration(none),
    ]);

  let ul =
    style([
      display(inlineBlock),
      listStyleType(none),
      unsafe("float", "right !important"),
    ]);

  let li = style([display(inline)]);

  let a =
    style([
      display(inline),
      fontFamily(`custom("Poppins")),
      fontSize(px(12)),
      fontWeight(`num(400)),
      paddingRight(px(20)),
      color(hex("072DEF")),
      textDecoration(none),
    ]);
};

[@react.component]
let make = () => {
  <div className=Styles.wrapper>
    <span className=Styles.span>
      {React.string({j|© Aria Messenger 2016|j})}
    </span>
    <ul className=Styles.ul>
      <li className=Styles.li>
        <a className=Styles.a href="#"> {React.string("Facebook")} </a>
      </li>
      <li className=Styles.li>
        <a className=Styles.a href="#"> {React.string("Twitter")} </a>
      </li>
      <li className=Styles.li>
        <a className=Styles.a href="#"> {React.string("Instagram")} </a>
      </li>
    </ul>
  </div>;
};
